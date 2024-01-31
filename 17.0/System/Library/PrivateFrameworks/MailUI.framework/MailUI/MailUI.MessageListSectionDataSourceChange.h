@class NSString;

@interface MailUI.MessageListSectionDataSourceChange : NSObject <EFPubliclyDescribable> {
    void /* unknown type, empty encoding */ change;
}

@property (nonatomic, readonly) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) BOOL isSkipped;
@property (nonatomic, readonly) BOOL failed;
@property (nonatomic, readonly) BOOL isFirstChange;
@property (nonatomic, readonly) BOOL isStale;
@property (nonatomic, readonly) BOOL isCleanSnapshot;

+ (id)stale;
+ (id)skipped;
+ (id)cleanSnapshot;
+ (id)withCount:(long long)a0;
+ (id)withCount:(long long)a0 isFirstChange:(BOOL)a1;
+ (id)withInitialCount:(long long)a0 validCount:(long long)a1;
+ (id)withInitialCount:(long long)a0 validCount:(long long)a1 isFirstChange:(BOOL)a2;

- (id)init;

@end
