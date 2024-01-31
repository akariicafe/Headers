@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)inputKeys;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)attributes;
- (id)outputImage;
- (id)dummyImagesForImages:(id)a0;

@end
