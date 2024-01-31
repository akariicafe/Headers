@class NSUUID, NSArray;

@interface LNAutoShortcutParameterPhraseGroup : NSObject

@property (readonly, nonatomic) NSUUID *parameterID;
@property (readonly, nonatomic) NSArray *phrases;

- (void).cxx_destruct;
- (void)addPhrase:(id)a0;
- (id)initWithParameterID:(id)a0 phrases:(id)a1;

@end
