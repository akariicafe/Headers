@class NSDictionary, NSString;

@interface PKTray : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *trayDict;
@property (readonly) BOOL isEmpty;
@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;

+ (id)filter:(id)a0 withBlock:(id /* block */)a1;
+ (id)trayWithString:(id)a0 andMediaSource:(id)a1;
+ (id)traysWithMediaSourceSupported:(id)a0 printerInputTrays:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;
- (id)mediaName;
- (id)initWithString:(id)a0 andMediaSource:(id)a1;

@end
