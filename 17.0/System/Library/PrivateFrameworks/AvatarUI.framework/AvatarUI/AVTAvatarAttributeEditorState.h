@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject

@property (retain, nonatomic) NSMutableDictionary *pairedStates;
@property (retain, nonatomic) NSMutableDictionary *multicolorEnabledStates;
@property (retain, nonatomic) NSMutableDictionary *multicolorSelectedStates;

+ (id)buildStateFromCoreModel:(id)a0 avatarConfiguration:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (long long)selectedMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)a0;
- (long long)enabledMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)a0;
- (id)initWithPairedStates:(id)a0 multicolorEnabledStates:(id)a1 multicolorSelectedStates:(id)a2;
- (BOOL)isCategoryPaired:(long long)a0;
- (void)setCategory:(long long)a0 inPairedState:(BOOL)a1;
- (void)setEnabledMulticolorSubpickersIndex:(long long)a0 forMulticolorPickerIdentifier:(id)a1;
- (void)setSelectedMulticolorSubpickersIndex:(long long)a0 forMulticolorPickerIdentifier:(id)a1;

@end
