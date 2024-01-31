@class NSString;

@interface PXMessagesStackAdditionalItemsViewUserData : NSObject <PXGViewUserData>

@property (readonly, nonatomic) struct { unsigned long long count; long long type; } additionalItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAdditionalItemsCount:(struct { unsigned long long x0; long long x1; })a0;

@end
