@class NSString, NSSet;

@interface _EARWordPart : NSObject {
    NSString *_tagName;
}

@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) NSString *tagName;
@property (readonly, nonatomic) unsigned long long frequency;
@property (readonly, nonatomic) NSSet *pronunciations;
@property (readonly, nonatomic) NSString *phoneticOrthography;

- (void).cxx_destruct;
- (id)initWithOrthography:(id)a0 pronunciations:(id)a1 tag:(long long)a2;
- (id)initWithOrthography:(id)a0 pronunciations:(id)a1 tagName:(id)a2 frequency:(unsigned long long)a3;
- (id)initWithOrthography:(id)a0 pronunciations:(id)a1 tagName:(id)a2 frequency:(unsigned long long)a3 phoneticOrthography:(id)a4;

@end
