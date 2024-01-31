@class NSString, BSActionResponder, UITraitCollection;

@interface PBUIWallpaperImageSlotRequestAction : BSAction {
    BSActionResponder *_responder;
}

@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) long long desiredStyle;
@property (readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property (readonly, copy, nonatomic) NSString *slotIdentifier;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithVariant:(long long)a0 desiredStyle:(long long)a1 traitCollection:(id)a2 slotIdentifier:(id)a3 forResponseOnQueue:(id)a4 withHandler:(id /* block */)a5;

@end
