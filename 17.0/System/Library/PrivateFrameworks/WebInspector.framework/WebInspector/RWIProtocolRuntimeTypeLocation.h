@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (nonatomic) int typeInformationDescriptor;
@property (copy, nonatomic) NSString *sourceID;
@property (nonatomic) int divot;

- (id)initWithTypeInformationDescriptor:(int)a0 sourceID:(id)a1 divot:(int)a2;

@end
