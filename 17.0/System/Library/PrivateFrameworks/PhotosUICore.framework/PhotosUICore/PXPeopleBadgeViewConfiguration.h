@class NSString;
@protocol PXPeopleBadgeViewDelegate;

@interface PXPeopleBadgeViewConfiguration : NSObject <PXGViewUserData>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double displayScale;
@property (readonly, weak, nonatomic) id<PXPeopleBadgeViewDelegate> badgeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithState:(long long)a0 displayScale:(double)a1 badgeViewDelegate:(id)a2;

@end
