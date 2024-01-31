@class NSString;

@interface SMArtwork : NSObject {
    void /* unknown type, empty encoding */ artwork;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, readonly) NSString *template;
@property (nonatomic, readonly) NSString *textColor;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
