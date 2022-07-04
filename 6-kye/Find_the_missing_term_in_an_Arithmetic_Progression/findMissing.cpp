static long findMissing(std::vector<long> list)
{
  int step = 0;
  
  if (abs(list[1] - list[0]) < abs(list[2] - list[1]))
      step = list[1] - list[0];
  else
      step = list[2] - list[1];

    for (int i = 0; i < list.size() - 1; i++)
      if (step != list[i + 1] - list[i])
          return list[i] + step;
}
