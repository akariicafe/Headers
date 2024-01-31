@class NSString, UIKBAutoFillTestExpectedResult, NSMutableDictionary, UIView, UINavigationItem;

@interface UIKBAutoFillTestArchive : NSObject <NSCoding, NSCopying> {
    NSMutableDictionary *_tableViewTagToDataSource;
}

@property (retain, nonatomic) UIView *snapshotView;
@property (copy, nonatomic) NSString *viewControllerClassName;
@property (copy, nonatomic) NSString *viewControllerTitle;
@property (nonatomic) BOOL requiresNavigationControllerNesting;
@property (copy, nonatomic) NSString *navigationControllerClassName;
@property (copy, nonatomic) NSString *presentingViewControllerClassName;
@property (retain, nonatomic) UINavigationItem *viewControllerNavigationItem;
@property (retain, nonatomic) UIKBAutoFillTestExpectedResult *expectedResult;

+ (id)autoFillTestArchiveWithData:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autoFillTestArchiveData;
- (void)setTableViewDataSource:(id)a0 forTableViewWithTag:(long long)a1;
- (id)tableViewDataSourceWithTag:(long long)a0;

@end
