@class UIMenu, NSSet, NSArray, UIAction, UIResponder, UITargetedPreview, UIViewController;
@protocol NSCopying;

@interface _UIFulfilledContextMenuConfiguration : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;
@property (readonly, nonatomic) NSSet *internalIdentifiers;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) NSArray *secondarySourcePreviews;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (retain, nonatomic) NSArray *accessoryViews;
@property (copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) UIAction *previewAction;
@property (readonly, nonatomic) BOOL isMultiItemMenu;
@property (nonatomic) unsigned long long representedItemCount;
@property (nonatomic) unsigned long long badgeCount;
@property (weak, nonatomic) UIResponder *firstResponderTarget;

- (void).cxx_destruct;
- (BOOL)isPresentable;
- (void)setPrimaryInternalIdentifier:(id)a0 secondaryIdentifiers:(id)a1;

@end
