@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (void)setType:(int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)initWithBuildType:(int)a0;

@end
