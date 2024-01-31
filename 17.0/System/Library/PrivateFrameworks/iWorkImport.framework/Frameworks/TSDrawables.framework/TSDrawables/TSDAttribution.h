@class NSString, NSURL;

@interface TSDAttribution : TSKSosBase <NSCopying> {
    NSString *_externalURLString;
    NSString *_authorURLString;
    BOOL _definedTitle;
    BOOL _definedDescriptionText;
    BOOL _definedExternalURLString;
    BOOL _definedAuthorName;
    BOOL _definedAuthorURLString;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSURL *externalURL;
@property (readonly, nonatomic) NSString *authorName;
@property (readonly, nonatomic) NSURL *authorURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithTitle:(id)a0 descriptionText:(id)a1 externalURL:(id)a2 authorName:(id)a3 authorURL:(id)a4;

@end
