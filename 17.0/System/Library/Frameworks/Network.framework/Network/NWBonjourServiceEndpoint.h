@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *domain;

+ (unsigned int)endpointType;
+ (id)endpointWithName:(id)a0 type:(id)a1 domain:(id)a2;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;

@end
