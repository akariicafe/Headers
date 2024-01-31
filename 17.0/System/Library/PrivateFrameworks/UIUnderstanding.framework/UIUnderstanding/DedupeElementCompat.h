@interface DedupeElementCompat : NSObject {
    void /* unknown type, empty encoding */ screenID;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ uiObject;
@property (nonatomic) void /* unknown type, empty encoding */ isDuplicate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUiObject:(id)a0 isDuplicate:(BOOL)a1 screenID:(id)a2;

@end
