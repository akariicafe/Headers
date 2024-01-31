@class NSString, NSData, NSURL, LPVisualMediaProperties;

@interface LPVisualMedia : NSObject <NSSecureCoding> {
    NSData *_data;
    LPVisualMediaProperties *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, retain, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) LPVisualMediaProperties *properties;

- (void)setFileURL:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_encodedSize;
- (id)_initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)_initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)_initWithData:(id)a0 fileURL:(id)a1 MIMEType:(id)a2 properties:(id)a3;
- (id)_initWithLPVisualMedia:(id)a0;
- (BOOL)_isSubstitute;
- (void)_mapDataFromFileURL;
- (id)initWithCoder:(id)a0 properties:(id)a1;
- (id)initWithCoderInternal:(id)a0;

@end
