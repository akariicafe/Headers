@class NSURL, NSString;

@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>

@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *baseImageIdentifier;
@property (nonatomic) unsigned long long imageType;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageURL:(id)a0 baseImageIdentifier:(id)a1 imageType:(unsigned long long)a2;

@end
