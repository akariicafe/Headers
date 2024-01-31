@class NSString;

@interface HMAttributeReadRequest : HMAttributeRequest <HMReadOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readRequestWithAccessoryProfile:(id)a0 attribute:(id)a1;

- (BOOL)isEqual:(id)a0;

@end
