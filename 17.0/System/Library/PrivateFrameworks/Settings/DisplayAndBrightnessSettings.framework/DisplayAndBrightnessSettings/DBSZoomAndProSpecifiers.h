@class NSArray, NSMutableArray, PSSpecifier;
@protocol DBSZoomAndProSpecifiersDelegate;

@interface DBSZoomAndProSpecifiers : NSObject {
    NSMutableArray *_specifiers;
}

@property (weak, nonatomic) id<DBSZoomAndProSpecifiersDelegate> delegate;
@property (readonly, nonatomic) NSArray *specifiers;
@property (readonly, nonatomic) PSSpecifier *proModeSwitchSpecifier;
@property (readonly, nonatomic) PSSpecifier *fineTuneSpecifier;

+ (void)removeSpecifiersFrom:(id)a0;
+ (BOOL)specifiersPresentIn:(id)a0;

- (void).cxx_destruct;
- (void)setProModeEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getProModeEnabled:(id)a0;
- (id)localizedMagnifyModeName;
- (void)presentModalFineTuneController;
- (void)presentModalMagnifyController;

@end
