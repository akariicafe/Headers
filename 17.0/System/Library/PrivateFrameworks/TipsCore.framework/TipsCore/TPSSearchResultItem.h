@class NSString;

@interface TPSSearchResultItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ documentIdentifier;
    void /* unknown type, empty encoding */ collectionIdentifier;
    void /* unknown type, empty encoding */ correlationIdentifier;
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ body;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *documentIdentifier;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSString *correlationIdentifier;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) void /* unknown type, empty encoding */ relevance;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 collectionIdentifier:(id)a1;

@end
