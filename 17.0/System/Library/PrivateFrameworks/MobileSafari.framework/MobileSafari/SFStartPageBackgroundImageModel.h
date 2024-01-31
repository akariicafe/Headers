@class WBSStartPageBackgroundImageDescription, NSString, NSItemProvider, WBSStartPageBackgroundImagesDataSource;

@interface SFStartPageBackgroundImageModel : NSObject {
    WBSStartPageBackgroundImagesDataSource *_dataSource;
    long long _index;
}

@property (readonly, nonatomic) WBSStartPageBackgroundImageDescription *imageDescription;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) BOOL isCustomImage;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (retain, nonatomic) NSString *symbolName;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemProvider:(id)a0;
- (void)getThumbnailImageWithCompletionHandler:(id /* block */)a0;
- (id)initWithIndex:(long long)a0 inDataSource:(id)a1 selected:(BOOL)a2;
- (id)initWithItemProvider:(id)a0 symbolName:(id)a1 profileIdentifier:(id)a2 selected:(BOOL)a3;

@end
