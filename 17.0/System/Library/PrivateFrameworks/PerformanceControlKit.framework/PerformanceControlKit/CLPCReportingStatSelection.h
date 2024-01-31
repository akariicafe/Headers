@interface CLPCReportingStatSelection : NSObject {
    struct array<bool, 23UL> { BOOL __elems_[23]; } selection;
}

- (void)enumerate:(id /* block */)a0;
- (void)selectAll;
- (id)init;
- (void)deselectAll;
- (BOOL)selectStat:(unsigned long long)a0 error:(id *)a1;
- (BOOL)selectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deselectStat:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deselectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)isSelected:(unsigned long long)a0 error:(id *)a1;

@end
