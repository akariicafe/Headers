@interface VoiceDialLastNameDataSource : VoiceDialNameDataSource

- (unsigned long long)personNameCount;
- (BOOL)getName:(id *)a0 phoneticName:(id *)a1 atIndex:(unsigned long long)a2 forPerson:(void *)a3;
- (unsigned long long)indexOfMainNameOfType:(int)a0;
- (int)typeOfNameAtIndex:(unsigned long long)a0;

@end
