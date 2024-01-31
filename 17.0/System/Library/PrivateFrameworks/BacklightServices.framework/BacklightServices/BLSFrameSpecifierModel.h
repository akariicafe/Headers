@class NSArray, NSMutableArray;

@interface BLSFrameSpecifierModel : NSObject {
    NSMutableArray *_specifiers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _stateHandler;
}

@property (readonly) NSArray *specifiers;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)addSpecifiers:(id)a0;
- (id)specifierAtPresentationDate:(id)a0;
- (void)purgeAllButOneSpecifiersBeforeDate:(id)a0;
- (void)purgeAllSpecifiersOnOrAfterDate:(id)a0;

@end
