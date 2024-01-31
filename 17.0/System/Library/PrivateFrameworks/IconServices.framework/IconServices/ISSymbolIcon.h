@class ISGraphicIconConfiguration, NSString, ISGraphicSymbolDescriptor, ISImageCache;

@interface ISSymbolIcon : ISCodableIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSString *symbolName;
@property (readonly, copy, nonatomic) ISGraphicIconConfiguration *config;
@property (readonly) ISGraphicSymbolDescriptor *graphicSymbolDescriptor;

- (id)symbol;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (id)imageForImageDescriptor:(id)a0;
- (id)initWithSymbolName:(id)a0 configuration:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSymbolName:(id)a0;
- (id)description;
- (id)_generateImageWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)_specUpdatedDescriptorForDescriptor:(id)a0;

@end
