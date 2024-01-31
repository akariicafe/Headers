@class NSString, NSSet, NSDate;

@interface AMSBagUnderlyingData : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ expirationDate;
    void /* unknown type, empty encoding */ fileKey;
    void /* unknown type, empty encoding */ aliasKeys;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bagDictionary;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *fileKey;
@property (nonatomic, readonly) NSSet *aliasKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileKey:(id)a0 aliasKeys:(id)a1 bagDictionary:(id)a2 expirationDate:(id)a3;

@end
