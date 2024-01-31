@class NSUUID;
@protocol WFParameterState;

@interface WFMultipleValueParameterStateEntry : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) id<WFParameterState> parameterState;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentity:(id)a0 parameterState:(id)a1;

@end
