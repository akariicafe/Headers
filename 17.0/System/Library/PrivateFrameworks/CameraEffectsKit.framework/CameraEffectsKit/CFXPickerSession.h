@class NSString, NSDictionary, NSDate;

@interface CFXPickerSession : NSObject

@property (readonly, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) NSDate *lastCompactPresentationTime;
@property (nonatomic) NSDate *lastExpandedPresentationTime;
@property (nonatomic) double *totalCompactPresentationDuration;
@property (nonatomic) double *totalExpandedPresentationDuration;
@property (nonatomic) BOOL didModifyEffectsStack;
@property (nonatomic) BOOL didRemoveEffect;
@property (nonatomic) NSString *typeOfRemovedEffect;
@property (readonly, nonatomic) NSString *pickerBundleIdentifier;
@property (readonly, nonatomic) double sessionDuration;
@property (readonly, nonatomic) BOOL isCompactPresentation;
@property (readonly, nonatomic) BOOL isExpandedPresentation;
@property (readonly, nonatomic) double compactPresentationDuration;
@property (readonly, nonatomic) double expandedPresentationDuration;
@property (nonatomic) BOOL didScroll;
@property (readonly, nonatomic) NSDictionary *effectChangesDict;

- (void)didDismiss;
- (void).cxx_destruct;
- (void)didChangePresentationMode;
- (void)didModifyEffectOfType:(id)a0 wasRemoval:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 isCompact:(BOOL)a1;

@end
