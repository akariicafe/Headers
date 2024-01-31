@class NSArray;

@interface MTRGeneralDiagnosticsClusterRadioFaultChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *current;
@property (copy, nonatomic) NSArray *previous;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
