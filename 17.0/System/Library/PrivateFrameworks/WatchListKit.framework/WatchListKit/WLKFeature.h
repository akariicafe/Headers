@class NSString;

@interface WLKFeature : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL enabled;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToFeature:(id)a0;

@end
