@class NSString, NSArray;

@interface CPUIImageRowCellConfiguration : NSObject <CPUIImageRowCellConfigurationProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ selectGridItemBlock;
@property (copy, nonatomic) id /* block */ selectTitleBlock;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *artworkCatalogs;
@property (nonatomic) BOOL showActivityIndicator;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithText:(id)a0 artworkCatalogs:(id)a1 selectGridItemBlock:(id /* block */)a2 selectTitleBlock:(id /* block */)a3;
+ (id)configurationWithText:(id)a0 artworkCatalogs:(id)a1 selectGridItemBlock:(id /* block */)a2 selectTitleBlock:(id /* block */)a3 showActivityIndicator:(BOOL)a4;
+ (id)configurationWithText:(id)a0 artworkCatalogs:(id)a1 selectGridItemBlock:(id /* block */)a2 selectTitleBlock:(id /* block */)a3 showActivityIndicator:(BOOL)a4 enabled:(BOOL)a5;
+ (id)configurationWithText:(id)a0 images:(id)a1 selectGridItemBlock:(id /* block */)a2 selectTitleBlock:(id /* block */)a3 showActivityIndicator:(BOOL)a4;
+ (id)configurationWithText:(id)a0 images:(id)a1 selectGridItemBlock:(id /* block */)a2 selectTitleBlock:(id /* block */)a3 showActivityIndicator:(BOOL)a4 enabled:(BOOL)a5;

- (void).cxx_destruct;

@end
