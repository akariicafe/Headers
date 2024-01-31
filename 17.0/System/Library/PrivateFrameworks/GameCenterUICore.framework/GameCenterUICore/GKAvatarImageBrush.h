@class NSString;

@interface GKAvatarImageBrush : GKImageBrush <GKBrushIdentification>

@property (nonatomic) long long dimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)renderedImageIdentifier;

@end
