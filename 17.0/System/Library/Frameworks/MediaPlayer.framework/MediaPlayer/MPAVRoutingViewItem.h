@class NSArray, NSString, UIImage, MPAVRoute;

@interface MPAVRoutingViewItem : NSObject <NSObject>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) MPAVRoute *mainRoute;
@property (readonly, nonatomic) NSArray *routes;
@property (readonly, nonatomic) MPAVRoute *leader;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *vendorSpecificCustomRowIdentifier;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic, getter=isPickable) BOOL pickable;
@property (readonly, nonatomic) unsigned long long nestedLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithVendorSpecificCustomRowTitle:(id)a0 icon:(id)a1 identifier:(id)a2;
+ (id)itemWithVendorSpecificRoute:(id)a0;
+ (id)itemWithActionTitle:(id)a0 subtitle:(id)a1 enabled:(BOOL)a2 identifier:(id)a3 image:(id)a4;
+ (id)itemWithVendorSpecificLeader:(id)a0 members:(id)a1;
+ (id)itemWithLeader:(id)a0 members:(id)a1;
+ (id)itemWithRoute:(id)a0;

@end
