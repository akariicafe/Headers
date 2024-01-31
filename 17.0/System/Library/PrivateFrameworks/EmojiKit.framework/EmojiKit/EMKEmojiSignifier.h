@class NSString;

@interface EMKEmojiSignifier : NSObject <NSCopying> {
    NSString *_string;
}

@property (readonly) NSString *string;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
