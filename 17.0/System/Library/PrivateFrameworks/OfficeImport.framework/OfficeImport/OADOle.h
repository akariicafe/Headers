@class NSString;

@interface OADOle : NSObject {
    BOOL mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (BOOL)isCLSIDSupported:(id)a0;
+ (BOOL)isProgIDChart:(id)a0;
+ (BOOL)isProgIDMathType:(id)a0;

- (id)init;
- (id)object;
- (id)description;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (id)CLSID;
- (id)unicodeUserType;
- (id)ansiClipboardFormatName;
- (id)ansiProgID;
- (id)ansiUserType;
- (BOOL)iconic;
- (id)macClipboardFormat;
- (void)setAnsiClipboardFormatName:(id)a0;
- (void)setAnsiProgID:(id)a0;
- (void)setAnsiUserType:(id)a0;
- (void)setCLSID:(id)a0;
- (void)setIconic:(BOOL)a0;
- (void)setMacClipboardFormat:(id)a0;
- (void)setUnicodeClipboardFormatName:(id)a0;
- (void)setUnicodeProgID:(id)a0;
- (void)setUnicodeUserType:(id)a0;
- (void)setWinClipboardFormat:(unsigned int)a0;
- (id)unicodeClipboardFormatName;
- (id)unicodeProgID;
- (unsigned int)winClipboardFormat;

@end
