@class NSString, NSObject;

@interface BCSBusinessItemIdentifier : NSObject <BCSItemIdentifying> {
    long long _computedTruncatedHash;
}

@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)matchesItemIdentifying:(id)a0;

@end
