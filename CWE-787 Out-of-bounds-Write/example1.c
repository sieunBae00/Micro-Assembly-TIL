void test_overflow() {
    int id_sequence[3];
    id_sequence[0] = 123;
    id_sequence[1] = 234;
    id_sequence[2] = 345;
    id_sequence[3] = 456; // 취약점 발생
    id_sequence[5] = 567; // 취약점 발생
}