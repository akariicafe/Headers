@class NSString, NSArray, NSURL;

@interface TSEditorialItem : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ subtitleColor;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ actionURL;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitleColor;
@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, retain) void /* unknown type, empty encoding */ thumbnailImage;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backingTag;
@property (nonatomic, retain) void /* unknown type, empty encoding */ headline;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 subtitleColor:(id)a3 attributes:(id)a4 actionURL:(id)a5 thumbnailImage:(id)a6 backingTag:(id)a7 headline:(id)a8;

@end
