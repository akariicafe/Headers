@class NSString;

@interface TSWPLoadableFontInfo : NSObject {
    unsigned char _attemptedLoad;
}

@property (copy, nonatomic) NSString *groupUID;
@property (copy, nonatomic) NSString *fontPath;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *fontFamily;
@property (nonatomic) struct CGFont { } *cgFont;
@property (nonatomic) BOOL obfuscated;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
