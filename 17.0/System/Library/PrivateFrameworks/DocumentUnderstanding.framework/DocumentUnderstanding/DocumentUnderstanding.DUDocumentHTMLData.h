@class NSString;

@interface DocumentUnderstanding.DUDocumentHTMLData : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ htmlString;
}

@property (nonatomic, copy) NSString *htmlString;
@property (nonatomic, retain) void /* unknown type, empty encoding */ documentEmailData;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
