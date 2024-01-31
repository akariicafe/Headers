@class PTSettings, NSString, NSArray, NSPredicate, NSHashTable;
@protocol PTComponentObserver;

@interface PTModule : NSObject <PTSettingsKeyPathObserver, PTComponentObserver, PTModuleComponent> {
    NSHashTable *_observers;
    NSArray *_components;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PTComponentObserver> componentObserver;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) NSPredicate *appearancePredicate;
@property (retain, nonatomic) NSString *childSettingsKeyPath;
@property (readonly, nonatomic) NSArray *allSections;
@property (readonly, nonatomic) NSArray *enabledSections;

+ (id)moduleWithTitle:(id)a0 contents:(id)a1;
+ (id)sectionWithRows:(id)a0;
+ (id)sectionWithRows:(id)a0 title:(id)a1;
+ (id)sectionWithRows:(id)a0 title:(id)a1 conditionFormat:(id)a2;
+ (id)submoduleWithModule:(id)a0 childSettingsKeyPath:(id)a1;
+ (id)sectionWithRows:(id)a0 title:(id)a1 condition:(id)a2;
+ (id)submoduleWithModule:(id)a0 childSettingsKeyPath:(id)a1 condition:(id)a2;
+ (id)moduleWithSettings:(id)a0;
+ (id)submoduleWithModule:(id)a0;

- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithContents:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_remoteEditingWhitelistedModule;
- (id)rowAtIndexPath:(id)a0;
- (id)_computeEnabledSections;
- (id)_remoteEditingWhitelistedComponent;
- (void)_reportSectionInsertsAndDeletesRelativeTo:(id)a0;
- (id)_settingsForComponent:(id)a0;
- (void)_updateEnabledSections;
- (void)enabledSectionsDidChange:(id)a0;
- (id)indexPathForRow:(id)a0;
- (void)section:(id)a0 didInsertRows:(id)a1 deleteRows:(id)a2;
- (void)sectionDidReload:(id)a0;

@end
