@interface Matrix : NSObject {
    struct CNMatrix<25U, 25U, double> { void /* function */ **_vptr$CNMatrixBase; unsigned int num_rows_; unsigned int num_cols_; int num_elements_; unsigned int lead_dim_; unsigned int max_num_rows_; unsigned int max_num_cols_; double *data_; struct unique_ptr<double[], std::default_delete<double[]>> { struct __compressed_pair<double *, std::default_delete<double[]>> { double *__value_; } __ptr_; } allocated_data_; } matrix;
}

@property (nonatomic) long long rows;
@property (nonatomic) long long columns;

- (id)init;
- (void)print;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)add:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)scale:(double)a0;
- (id)row:(int)a0;
- (id)transpose;
- (id)initWithMatrix:(struct CNMatrix<25U, 25U, double> { void /* function */ **x0; unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; double *x7; struct unique_ptr<double[], std::default_delete<double[]>> { struct __compressed_pair<double *, std::default_delete<double[]>> { double *x0; } x0; } x8; })a0;
- (id)initWithRepeating:(double)a0 rows:(long long)a1 columns:(long long)a2;
- (id)inv;
- (id)col:(int)a0;
- (double)getValueAtRow:(int)a0 atCol:(int)a1;
- (id)initIdentityWithRows:(long long)a0;
- (id)initOnesWithRows:(long long)a0 withCols:(long long)a1;
- (id)initWithRows:(long long)a0 withCols:(long long)a1;
- (id)initZerosWithRows:(long long)a0 withCols:(long long)a1;
- (id)mul:(id)a0;
- (void)setValue:(double)a0 atRow:(int)a1 atCol:(int)a2;
- (void)setZeros;
- (id)sqrt;
- (id)sub:(id)a0;

@end
