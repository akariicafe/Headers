@protocol TUICandidateViewStyle;

@interface TUICandidateLine : UICollectionReusableView

@property (retain, nonatomic) id<TUICandidateViewStyle> style;

+ (id)reuseIdentifier;

- (void).cxx_destruct;

@end
