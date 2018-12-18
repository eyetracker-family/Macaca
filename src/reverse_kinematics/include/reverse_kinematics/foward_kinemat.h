#ifndef __FOWARD_KINEMAT_
#define __FOEARD_KINEMAT_
#include <cmath>


#define DSE 329.2f //���帡������
#define DEW 255.5f //

/*1y?��???��*/
extern float T_temp1[4][4];
extern float T_temp2[4][4];


/*T01???��*/
extern float T01_x0_90[4][4];//��?x0?��Dy��a90?��

							 /*T12???��*/
extern float T12_x1_90[4][4];//��?x1?��Dy��a90?��
extern float T12_z2_90[4][4];//��?z2?��Dy��a90?��
							 /*T23???��*/
extern float T23_x2_90[4][4];//��?x2?��Dy��a-90?��
extern float T23_z3_90[4][4];//��?z3?��Dy��a90?��
							 /*T34???��*/
extern float T34_z3_L1_x3_90[4][4];//??z3?����??��L1��??����?��?��?x3Dy��a90?��
extern float T34_z4_180[4][4];//��?z4?��Dy��a180?��
							  /*T45???��*/
extern float T45_y4_L2_x4_90[4][4];//??y4?����??��L2��??����?��?��?x4Dy��a90?��
extern float T45_z5_90[4][4];//��?z5?��Dy��a90?��
							 /*T56???��*/
extern float T56_x5_90[4][4];//��?x5?��Dy��a-90?��
extern float T56_z6_90[4][4];//��?z6?��Dy��a90?��
							 /*T67???��*/
extern float T67_x6_90[4][4];//��?x6?��Dy��a90?��
extern float T67_z7_90[4][4];//��?z7?��Dy��a0?��??????????????

const float  T87[4][4] = {
						{1,0,0,0},
						{0, 1, 0, 0},
						{0, 0, 1, -70},
						{0,0,0,1}
						};

void matrix_multiply(float *a, float *b, float *c, int x, int y, int z);
void matrix_inv_3_3(float(*m1)[3], float(*m2)[3]);





#endif // !__FOWARD_KINEMAT_
