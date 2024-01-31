@class NSEnumerator, NWURLError;

@interface NWURLErrorUserInfoDictionaryEnumerator : NSEnumerator

@property (retain, nonatomic) NWURLError *error;
@property (retain, nonatomic) NSEnumerator *userInfoKeyEnumerator;

- (id)nextObject;
- (void).cxx_destruct;

@end
