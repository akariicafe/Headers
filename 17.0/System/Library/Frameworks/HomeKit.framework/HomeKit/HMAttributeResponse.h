@class HMAttributeRequest;

@interface HMAttributeResponse : HMResponseBase

@property (readonly, nonatomic) HMAttributeRequest *request;

- (BOOL)isEqual:(id)a0;

@end
