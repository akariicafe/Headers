@class PRUISIncomingCallPosterContextNameVariations, NSString;

@interface PRUISIncomingCallPosterContext : NSObject <PRUISPosterEditingContextInternal, PRUISPosterRenderingContextInternal, PRUISPosterEditingContext, PRUISPosterRenderingContext>

@property (readonly, nonatomic) PRUISIncomingCallPosterContextNameVariations *nameVariations;
@property (readonly, nonatomic) long long preferredNameStyle;
@property (readonly, copy, nonatomic) NSString *preferredTitleString;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } horizontalTitleBoundingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } verticalTitleBoundingRect;
@property (readonly, copy, nonatomic) NSString *imageAssetID;
@property (readonly, nonatomic, getter=isPersonalPoster) BOOL personalPoster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)titleString;
- (id)initWithNameVariations:(id)a0 preferredNameStyle:(long long)a1 horizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 verticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageAssetID:(id)a4 personalPoster:(BOOL)a5;
- (id)initWithTitleString:(id)a0 horizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 verticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageAssetID:(id)a3 personalPoster:(BOOL)a4;
- (void)applyContextToEditingSceneViewController:(id)a0;
- (void)applyContextToScene:(id)a0;
- (id)identifierForSnapshotting;
- (id)identifierForSnapshottingWithNameStyle:(long long)a0;

@end
