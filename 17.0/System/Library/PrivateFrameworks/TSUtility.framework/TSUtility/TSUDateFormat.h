@class NSString;

@interface TSUDateFormat : NSObject <NSCopying, TSUDataFormat> {
    NSString *mFormat;
    NSString *mName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatWithFormat:(id)a0 name:(id)a1;

- (id)format;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formatName;
- (id)initWithFormat:(id)a0 name:(id)a1;
- (void)setFormatName:(id)a0;

@end
