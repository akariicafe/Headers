@class NSString;

@interface ICTTFont : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id nativeFont;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) unsigned int fontHints;

- (unsigned long long)hash;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 size:(double)a1 hints:(unsigned int)a2;
- (void)saveToArchive:(void *)a0;

@end
