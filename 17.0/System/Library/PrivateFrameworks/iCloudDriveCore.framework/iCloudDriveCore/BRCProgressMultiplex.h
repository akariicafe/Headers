@class NSString, NSArray;

@interface BRCProgressMultiplex : NSObject {
    NSArray *_underlineProgressObjects;
}

@property (copy, nonatomic) NSString *localizedAdditionalDescription;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;

- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (BOOL)isPublished;
- (void).cxx_destruct;
- (BOOL)indeterminate;
- (id)brc_dumpDescription;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithUnderlineProgressObjects:(id)a0;

@end
