@class NSString, NSURL;

@interface TPSUserGuideTopic : NSObject {
    void /* unknown type, empty encoding */ productId;
    void /* unknown type, empty encoding */ bookId;
    void /* unknown type, empty encoding */ topicId;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ body;
}

@property (class, nonatomic, readonly) NSString *uti;

@property (nonatomic, readonly) NSURL *supportSiteURL;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, copy) NSString *bookId;
@property (nonatomic, copy) NSString *topicId;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;

+ (BOOL)isValidIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProductIdentifier:(id)a0 bookIdentifier:(id)a1 topicIdentifier:(id)a2 version:(id)a3;
- (id)initWithSearchableItemUniqueIdentifier:(id)a0;
- (id)searchableItemUniqueIdentifierWith:(id)a0;

@end
