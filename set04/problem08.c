#include <stdio.h>
#include <math.h>
typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct line {
    Point p;
    float distance;
} Line;

typedef struct polygon {
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n();
Line input_line(int n);
void input_n_lines(int n, Line *l);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_n_distance(int n, Line *l);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{
  Polygon p;
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter the sides\n");
  scanf("%d", &n);
  return n;
}

Line  input_line(int n)
{
   Line l;
  printf("Enter the x and y coordinates of %d point\n", n);
  scanf("%f%f", &l.p.start_end_x, &l.p.start_end_y);
  return l;
}
void input_n_lines(int n, Line *l)
{
  for(int i=0;i<n;i++)
    {
      l[i]=input_line(i);
    }
}

float find_distance(Point a, Point b)
{
    float distance;
    distance=sqrt(pow((b.start_end_x - a.start_end_x),2)+
                  pow((b.start_end_y - a.start_end_y),2));
    return distance;
}

void find_n_distance(int n, Line *l)
{
   int i;
    for( i=0; i<n; i++)
      {
          l[i].distance= find_distance(l[i].p, l[i+1].p);
      }
    l[i].distance=find_distance(l[i].p, l[0].p);
}

int input_polygon(Polygon *p)
{
    p->sides=input_n();
    input_n_lines(p->sides, p->l);
    find_n_distance(p->sides, p->l);
}

void find_perimeter(Polygon* p)
{
    for(int i=0; i<(p->sides); i++)
      {
        p->perimeter= (p->perimeter) + p->l[i].distance;
      }
}

void output(Polygon p)
{
  printf("The perimeter of the polygon is %f\n", p.perimeter);
}